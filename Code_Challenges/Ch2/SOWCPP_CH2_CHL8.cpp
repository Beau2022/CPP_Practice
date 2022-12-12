// // Challenge 8: Total Purchase
// // Write a program that holds
// // five purchases.  Be sure to
// // calculate the total cost, then
// // have an additional subtotal cost
// // with an added 7% tax.
// // Output the numbers entered,
// // the total, and subtotal.
// //
// // Name: Beau Lee
// // E-Mail: beaulee10@gmail.com
// #include <iomanip>
// #include <iostream>
//
// int main()
// {
//     double value1 = 15.95;
//     double value2 = 24.95;
//     double value3 = 6.95;
//     double value4 = 12.95;
//     double value5 = 3.95;
//     constexpr double sales_tax = 0.07;
//     double total = value1 + value2 + value3 + value4 + value5;
//     double subtotal = total + (total * sales_tax);
//
//     std::cout << "Welcome to the Purchase App." << std::endl;
//     std::cout << "Please enter in the customer's five items." << std::endl;
//     std::cout << "Purchased Item 1: $" << value1 << std::endl;    
//     std::cout << "Purchased Item 2: $" << value2 << std::endl;    
//     std::cout << "Purchased Item 3: $" << value3 << std::endl;    
//     std::cout << "Purchased Item 4: $" << value4 << std::endl;    
//     std::cout << "Purchased Item 5: $" << value5 << std::endl;
//     std::cout << "Total: $" << total << std::endl;        
//     std::cout << "Tax: " << sales_tax * 100 << "%" << std::endl;
//     std::cout << "Subtotal: $"
//         << std::setprecision(2)
//         << std::fixed
//         << subtotal << std::endl;
// }
