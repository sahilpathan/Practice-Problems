
# https://www.hackerrank.com/challenges/strange-advertising

import math

def viral_impact(days,people):
    if (days == 0) : return 0
    
    liked_people = math.floor(people/2)
    days-=1           
    people = liked_people*3 
    
    x= viral_impact(days,people)
    
    return (liked_people+x)

days = int(raw_input().strip());
people = 5

liked = viral_impact(days,people)
print (int(liked))
     
        
    
   
    
    