# Title: 물건 포장하기
# Link: https://www.acmicpc.net/problem/23026
import time

class Truck():
	def __init__(self, limit, cargo):
		self.size = limit
		self.cargo = cargo

	def get_cago(self, index : int):
		return self.cargo[index]
	
	def get_size(self):
		return self.size

def solution(trucks : list, truck_count : int, box_limit : int, element_limit : int) -> int:
	print(f"trucks: {trucks}")
	print(f"truck_count: {truck_count}")
	print(f"box_limit: {box_limit}")
	print(f"element_limit: {element_limit}")
	
	box_info = {
		"limit" : box_limit,
		"count" : 0,
		"cago" : 0
	}

	for i in range(truck_count):
		truck = trucks[i]
		truck_size = truck.get_size()
		for j in range(truck_size):
			truck_cago = truck.get_cago(j)
			if truck_cago > element_limit:
				continue
			if box_info["cago"] + truck_cago > box_info["limit"]:
				box_info["count"] += 1
				box_info["cago"] = truck_cago
			else:
				box_info["cago"] += truck_cago
	return box_info["count"] + 1

def main():
	# case_count = int(input())
	# for _ in range(case_count):
	# 	element_limit, box_limit, truck_count = map(int, input().split())
	# 	truck_cargo = list(map(int, input().split()))
	# 	trucks = [ truck_cargo.copy() for i in range(truck_count) ]
	# 	answer = solution(trucks, truck_count, box_limit, element_limit)
	# 	print(answer)
	case_count = 6
	input_1_list = [ "4 6 3",  "3 5 4",  "5 5 4",  "7 5 5", "5 6 3", "5 7 5"]
	input_2_list = [ "1 1 1 1", "2 2 3", "2 2 3 3 2", "2 3 2 2 3 2 3", "1 2 3 4 5", "1 2 2 4 4"]
	for i in range(case_count):
		start_time = time.time()
		element_limit, box_limit, truck_count = map(int, input_1_list[i].split())
		truck_cargo = list(map(int, input_2_list[i].split()))
		trucks = [ Truck(len(truck_cargo), truck_cargo) for i in range(truck_count) ]
		answer = solution(trucks, truck_count, box_limit, element_limit)
		print(answer)
		end_time = time.time()
		#print time by second
		print(f"Time: {end_time - start_time:.6f}s")

if __name__ == "__main__":
	main()
