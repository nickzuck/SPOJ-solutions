require 'bigdecimal'
require 'bigdecimal/math'

include BigMath

a = BigDecimal(PI(3359)).to_s
print '3.'
for i in 3...a.length()-2
        print a[i]
end
