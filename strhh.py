
for i in range(input()):

	str = raw_input()

	length = len(str)

	j = 0

	toPrint = []
	while(j<length/2):

		toPrint.append(str[j]
)
		j += 2
	print "".join(toPrint)