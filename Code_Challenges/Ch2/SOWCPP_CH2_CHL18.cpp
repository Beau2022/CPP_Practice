// // Challenge 18: Energy Drink Consumption
// // Write a program where a soft drink
// // surveyed 16500 customers where only
// // 15% of them only purchased one or two
// // energy drinks per week.  58% preferred
// // citrus-flavoured every drinks.
// // Output the following:
// // 1.  The number of customers who purchased one
// //     or more enery drinks.
// // 2.  The approximate number of customers in
// //     the survey who prefer citrus-flavoured energy
// //     drinks.
// #include <iomanip>
// #include <iostream>
//
// int main()
// {
//     double totalCustomers = 16500.00;
//     double avgPercent = 0.15;
//     double custAvgPercent = 0.58;
//     double custPurchasePerWeek = totalCustomers * avgPercent;
//     double drinksBought = custPurchasePerWeek * custAvgPercent;
//
//     std::cout << "Number of surveyed customers: " << totalCustomers << std::endl;
//     std::cout << "Number of customers who have purchased\n";
//     std::cout << "Customers who bought one or more energy drinks per week: "
//               << avgPercent * 100 << "%" << std::endl;
//     std::cout << "Number of customers who prefer citrus-flavoured energy drinks: "
//               << std::setprecision(0)
//               << std::fixed
//               << drinksBought << " customers.";
// }
