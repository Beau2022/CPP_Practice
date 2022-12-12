// // Challenge 17: Stock Commission
// // A customer has purchased 750 shares of stock.
// // The price per share was $35.00, they must be
// // pay their 2% percent commission for the transaction.
// // Write a program that displays amount paid, the
// // commission, and the total amount 
// #include <iomanip>
// #include <iostream>
//
// int main()
// {
//     double shares_stock = 750.00;
//     double share_price = 35.00;
//     double commission_percent = 0.02;
//     double total = shares_stock * share_price;
//     double subtotal = (shares_stock * share_price) + ((shares_stock * share_price) * commission_percent);
//
//     std::cout << "Number of shares bought: " << shares_stock << std::endl;
//     std::cout << "Amount paid for stock alone: $" << share_price << std::endl;
//     std::cout << "Amount of commission: " << commission_percent * 100 << "%" << std::endl;
//     std::cout << "" << shares_stock * share_price << std::endl;
//     std::cout << "Total (750 @ $35.00): $" 
//         << std::setprecision(2)
//         << std::fixed
//         << total << std::endl;
//     std::cout << "Subtotal (plus 2% commn.): $"
//         << std::setprecision(2)
//         << std::fixed
//         << subtotal << std::endl;
//     std::cout << "Amount Owed: $"
//         << std::setprecision(2)
//         << std::fixed
//         << subtotal - total << std::endl;
// }
