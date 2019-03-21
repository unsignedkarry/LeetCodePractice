func toLowerCase(str string) string {
	r := []rune(str)
	for i:=0;i<len(r);i++ {
		if r[i]>='A' && r[i]<='Z' {
			r[i]+= 32
		}	
	}
	return string(r)
}
