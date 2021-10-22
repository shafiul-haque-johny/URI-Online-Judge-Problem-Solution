# 1010
p1_code, p1_num, p1_price = input().split()
p1_code, p1_num, p1_price = [int(p1_code), int(p1_num), float(p1_price)]
p2_code, p2_num, p2_price = input().split()
p2_code, p2_num, p2_price = [int(p2_code), int(p2_num), float(p2_price)]
p1_paid = p1_num * p1_price
p2_paid = p2_num * p2_price
all_paid = p1_paid + p2_paid
print("VALOR A PAGAR: R$ %.2f" % all_paid)