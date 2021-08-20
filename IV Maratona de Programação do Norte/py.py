# Python3 program to find length
# of the longest prefix which
# is also suffix
def isSuffix(s1, s2):

    n1 = len(s1)
    n2 = len(s2)
    if (n1 > n2):
        return False
    for i in range(n1):
        if(s1[n1 - i - 1] != s2[n2 - i - 1]):
            return False
    return True
def dfs(s):
    n = len(s)
    i = n//2
    for i in range(n):
        if(s[i] == s[0]):
            prefix = s[0: res]
    		suffix = s[n - res: n]

def longestPrefixSuffix(s) :
	n = len(s)

	for res in range(n // 2, 0, -1) :

		# Check for shorter lengths
		# of first half.
		prefix = s[0: res]
		suffix = s[n - res: n]

		if (prefix == suffix) :
			return res


	# if no prefix and suffix match
	# occurs
	return 0

# Driver Code
if __name__ == "__main__":
    s = "xdbrasilybral"
    s1 = "bra"
    s2 = "xdbrasilybral"

    # Test case-sensitive implementation
    # of endsWith function
    result = isSuffix(s1, s2)

    if (result):
        print("Yes")
    else:
        print( "No")

    print(longestPrefixSuffix(s))

# This code is contributed by Nikita Tiwari.
