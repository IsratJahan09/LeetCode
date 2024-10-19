class Solution:
    def calculate(self, s: str) -> int:
        n = len(s)
        sign = '+'
        num = 0
        stack = []
        for i in range(n):
            if s[i].isdigit():
                num = num*10+int(s[i])
            if (not s[i].isdigit() and s[i]!=' ') or i == n-1:
                if sign == '+':
                    stack.append(num)
                elif sign == '-':
                    stack.append(-num)
                elif sign == '/':
                    top = stack.pop()
                    stack.append(int(top/num))
                elif sign == '*':
                    top = stack.pop()
                    stack.append(num*top)
                num = 0
                sign = s[i]
        return sum(stack)
