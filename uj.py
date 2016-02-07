while(True):
    people , items = map(int, raw_input().split())
    if people == 0 and items == 0 :
        break
    print people**items
