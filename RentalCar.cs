// https://www.codewars.com/kata/568d0dd208ee69389d000016
public class RentalCar {
    
    public static int RentalCarCost(int d) {
       return d >= 7 ? d * 40 - 50 : d <= 2 ? d * 40 : d * 40 - 20;
    } 
}
