class Solution(object):
	def toLowerCase(self, str):
		"""
		:type str: str
		:rtype: str
		"""
		res = ""
		for ch in res:
			if ord('A') <= ord(ch) <= ord('Z'):
				res += chr(ord(ch) + 32)
			else:
				res += ch
		return res
