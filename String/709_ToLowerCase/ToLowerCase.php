class Solution {
	/**
	 * @param String $str
	 * @return String
	 */
	function toLowerCase($str) {
		for ($i=0;$i<strlen($str);$i++) {
			$value = ord($str[$i]);
			if ($value >= ord('A') && $value <= ord('Z')) {
				$str[$i] = chr($value +32);
			}
		}
		return $str;
	}
}
