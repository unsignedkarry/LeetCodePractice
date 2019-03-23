/*
Every email consists of a local name and a domain name, separated by the @ sign.

For example, in alice@leetcode.com, alice is the local name, and leetcode.com is the domain name.

Besides lowercase letters, these emails may contain '.'s or '+'s.

If you add periods ('.') between some characters in the local name part of an email address, mail sent there will be forwarded to the same address without dots in the local name.  For example, "alice.z@leetcode.com" and "alicez@leetcode.com" forward to the same email address.  (Note that this rule does not apply for domain names.)

If you add a plus ('+') in the local name, everything after the first plus sign will be ignored. This allows certain emails to be filtered, for example m.y+name@email.com will be forwarded to my@email.com.  (Again, this rule does not apply for domain names.)

It is possible to use both of these rules at the same time.

Given a list of emails, we send one email to each address in the list.  How many different addresses actually receive mails? 

 

Example 1:

Input: ["test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"]
Output: 2
Explanation: "testemail@leetcode.com" and "testemail@lee.tcode.com" actually receive mails
 

Note:

1 <= emails[i].length <= 100
1 <= emails.length <= 100
Each emails[i] contains exactly one '@' character.
*/

class Solution {
public:
	int numUniqueEmails(vector<string>& emails) {
		if (emails.empty()) {
            return 0;
        }
        int len = emails.size();
        for (int i = 0;i < len; ++i) {
            transEmails(emails[i]);
        }
        sort(emails.begin(), emails.end());
        vector<string>::iterator it = unique(emails.begin(),emails.end());
        emails.resize(std::distance(emails.begin(),it));
		return emails.size();
    }
private:
    void transEmails(string& email) {
		int len = email.size();
		int email_sign = email.find('@');
		string localemail = getLocalemail(email, 0, email_sign - 1);
		email = localemail + email.substr(email_sign);
    }

	string getLocalemail(string& email, int begin, int end) {
		string res = "";
		for (int i = begin; i <= end; ++i) {
			if (email[i] == '+') {
				break;
			} else if (email[i] == '.') {
  				continue;
			} else {
				res += email[i];
			}
		}
		return res;
	}
};
