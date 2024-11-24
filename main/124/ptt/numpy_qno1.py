city_names={
        0:"city1",
        1:"city2",
        2:"city2",
        3:"city2",
        4:"city2",
        5:"city2",
        6:"city2",
        7:"city2",
        8:"city2",
        9:"city2"
            }
tempreture=[
            [30,38,31,32,34,33,57,64,73,86],
            [100,67,99,78,56,78,45,56,78,89]
            ]
def find_tempreture(tempreture):
    max_temp=float('-inf')
    max_temp=float('inf')
    max_city,max_day=None,None
    min_city,min_day=None,None
    for day in range (len(tempreture)):
        for city in range(len(tempreture)):
            temp=tempreture[day][city]
            if (temp>max_temp):
                max_temp=temp
                max_city=city
                max_day=day+1

    return max_temp,city_names[max_city],max_day,min_temp,city_names[min_city],min_day 
max_day,max_city,max_temp,min_city,min_day,min_temp=find_tempreture(tempreture)
print(f"highest tempreture:{max_temp} °c in {max_city} on day{max_day}")
print(f"highest tempreture:{min_temp} °c in {min_city} on day{min_day}")
