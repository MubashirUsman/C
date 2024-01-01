def timeConversion(time_twentyfour):
    if (time_twentyfour[-2]=="A" or time_twentyfour[-2]=="P"):
        if(time_twentyfour[-2]=="A"):
            if(int(time_twentyfour[0]+time_twentyfour[1])==12):
                hour = (time_twentyfour[0]+time_twentyfour[1]) == "00"
                return print(f"{hour}"+time_twentyfour[2:-2])
            else:
                return print(time_twentyfour[:-2])
        else:
            hour = int(time_twentyfour[0]+time_twentyfour[1])+12
            return print(f"{hour}"+time_twentyfour[2:-2])

timeConversion("12:45:26PM")

