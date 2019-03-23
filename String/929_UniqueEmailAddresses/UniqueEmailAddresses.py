class Solution(object):
	def numUniqueEmails(self, emails):
		"""
		:type emails: List[str]
		:rtype: int
		"""
		new_emails = []
		for index in range(len(emails)):
			email = self.transEmail(emails[index])
			if email not in new_emails:
				new_emails.append(email)
		return len(new_emails)

	def transEmail(self, email):
		email_sign = email.find('@')
		plus_sign = email.find('+', 0, email_sign)
		if plus_sign == -1:
			return email
		else:
			res = email[0:plus_sign - 1]
			res = res.replace(".","")
			res += email[email_sign:]
			return res
