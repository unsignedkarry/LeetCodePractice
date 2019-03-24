class Solution(object):
    def uniqueMorseRepresentations(self, words):
        """
        :type words: List[str]
        :rtype: int
        """
        morseCode = set()
        for word in words:
            morseWord = self.word2Morse(word)
            morseCode.add(morseWord)
        return len(morseCode)

    def word2Morse(self, word):
        """
        :type word: string
        :rtype: string
        """
        MorseAlphabet = (".-","-...","-.-.","-..",".","..-."
                         ,"--.","....","..",".---","-.-",".-.."
                         ,"--","-.","---",".--.","--.-",".-."
                         ,"...","-","..-","...-",".--","-..-","-.--","--..")
        res = ""
        for ch in word:
            res += MorseAlphabet[ord(ch)-ord('a')]
        return res
        
