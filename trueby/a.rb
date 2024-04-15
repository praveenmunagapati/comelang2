class DataA
    def initialize(a)
        puts("HELLO")
    end
    def fun()
        puts("RUBY")
    end
end
b=a=123
a=123
a="123"
puts(a)
data=DataA.new(1)
data.fun()
