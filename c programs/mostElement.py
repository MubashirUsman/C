# first each element's frequency is calculated, and they are put into a hashmap,
# then that hashmap is checked by how many times a number appeared for every element 
# this has O(n^2) complexity
def frequency_map(array, length):
    frequency_dict = {}
    for i in array:
        frequency_dict[f"{i}"] = most_element(array, length, i)
    max_times_number = highest_freq(frequency_dict)
    return print(max_times_number) 

def most_element(array, length, number):
    number_of_times=0
    for i in range(length):
        if (array[i] == number):
            number_of_times +=1 
    return number_of_times

def highest_freq(dictionary):
    max_times_number = 0
    for keys in dictionary:
        if(int(dictionary[keys]) > int(max_times_number)):
            max_times_number = keys
    return max_times_number

frequency_map([1, 3, 2, 1, 5, 3, 5, 8, 7, 5, 0, 5, 12, 89, 9, 0, 32], 17)