// // Challenge 4:
// // //  // // //    //  // Write a Restaurant Bill program
// // where the tax has an additional
// // 6.75% charge.
// //
// // Author: Beau Lee
// // E-Mail: beaulee10@gmail.com
//
// #include <iomanip>
// #include <iostream>
//
// int main()
// {    
//     double meal_charge = 88.67;                     // You may change this value if you like.
//     double resto_tip = meal_charge * 0.20;          // The Restaurant tip.
//     double tax_charge = meal_charge * 0.0675;       // The Tax Charge Percentage.
//     double total = meal_charge + tax_charge;        // The Total calculation.
//     double subtotal = total + resto_tip;            // The subtotal calculation.
//     
//     std::cout << "Welcome to the Eat Happy Restaurant Billing App.\n";
//     std::cout << "Please enter the customer's total charges: " << meal_charge << std::endl;
//     std::cout << "Total Meal Charge: $" << meal_charge << std::endl;
//     std::cout << "Additional tax charge: " << 0.0675 * 100 << "%" << std::endl;
//     std::cout << "Additional Tip: " << 0.20 * 100 << "%" << std::endl;
//     std::cout << "Total Meal After Taxes: $"
//               << std::setprecision(2)
//               << std::fixed
//               << total << std::endl;   
//     std::cout << "Total Meal After Tip: $"
//               << std::setprecision(2)
//               << std::dec
//               << subtotal << std::endl
//     << "Thank you for using the Eat Happy Restaurant Billing App\n"
//     << "Have a great day, and please come again."<< std::endl;    
//     return 0;                  
// }
