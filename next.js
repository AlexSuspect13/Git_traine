function nextHappyYear(year){
 while(new Set ([...++year+'']).size<4);
                return year;
}
