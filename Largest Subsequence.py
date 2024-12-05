for _ in range(int(input())):
    n = int(input())
    s = input()
    print(max(s.rfind('a') - s.find('a'), s.rfind('b') - s.find('b')) + 1)
