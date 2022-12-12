// // Challenge 2:
// // The East Coast sales division generates
// // 58 percent of total sales.  Based on
// // that, write a program that will predict
// // how much the East Coast division makes
// // if the company has $8.6 million in
// // sales this year.
// //
// // Name: Beau Lee
// // E-Mail: beaulee10@gmail.com
// 
// #include <iomanip>
// #include <iostream>
//
// int main()
// {
//     double percent;
//     double num1;
//
//     std::cout << "Please enter this year's sales\n" 
//               << "from The East Coast Company.\n" << std::endl;
//     std::cin  >> num1;
//
//     std::cout << "This year's sales from the\n"
//               << "was " << num1 << std::endl;
//
//     std::cout << "Please input your sales percentage here as a decimal.\n";
//     std::cout << "For Example: 50% as a decimal is 0.50." << std::endl;
//     std::cin >> percent;
//     std::cout << "The percentage entered for the total sales is: "
//               << percent << std::endl;
//
//     const double total = num1 * percent;
//
//     // Setting the precision to help lace the,
//     // total to two decimal places.
//     //
//     // Placing the total as a fixed decimal,
//     // and then rounding the variable to a
//     // fixed decimal, as outlined in:
//     // 
//     // https://cplusplus.com/forum/general/139501/
//     
//     std::cout << "The total sales, based on the percentage given is: "
//               << std::setprecision(2)
//               << std::fixed
//               << total << std::endl;
//     
//     std::cout << "Thank you for using The East Cost Company App, \n";
//     std::cout << "have a great day.";
//
//     return 0;
// }
