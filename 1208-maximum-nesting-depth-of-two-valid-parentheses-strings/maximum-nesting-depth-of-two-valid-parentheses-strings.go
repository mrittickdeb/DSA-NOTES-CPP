func maxDepthAfterSplit(seq string) []int {
	n := len(seq)
	ans := make([]int, n)
	for i := 0; i < n; i++ {
		if seq[i] == '(' {
			ans[i] = (i & 1) ^ 1
		} else {
			ans[i] = (i & 1) ^ 0
		}
	}
	return ans
}