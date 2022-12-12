// // Challenge 3: 
// // Sales Tax
// // Write a program that will compute
// // the total sales when a user enteres
// // the purchase amount.  Afterwards,
// // add a 2% sales tax, and a 4% state
// // tax on top of the total.
// //
// // Name: Beau Lee
// // E-Mail: beaulee10@gmail.com
// #include <iomanip>
// #include <iostream>
//
// int main()
// {
//     double sales_tax = 0.02;
//     double state_tax = 0.04;
//     double total;
//
//     std::cout << "Customer Invoice\n" << std::endl;
//     std::cout << "Please enter total purchase: " << std::endl;
//     std::cin >> total;
//     std::cout << "Sales Tax: " << sales_tax * 100 << "%" << std::endl;
//     std::cout << "State Tax: " << state_tax * 100 << "%" << std::endl;
//     std::cout << "Total: $" 
//         << std::setprecision(2)
//         << std::fixed
//         << total + ((total * sales_tax) + (total * state_tax)) << std::endl;
//     std::cout << "Thank you, please come again.";
//     return 0;
// }
