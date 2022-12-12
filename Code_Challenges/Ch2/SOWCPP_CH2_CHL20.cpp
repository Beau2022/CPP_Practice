// // How Much Paint
// // Each square foot of paint is 340 square feet.
// // Write a program to determine and report approximately
// // how many gallons will be needed for two coats for a
// // 6-foot high by 100-foot long fence.
// #include <iostream>
//
// int main()
// {
//     double ppSqFt = 340.00;
//     double length = 100.00;
//     double height = 6.00;
//     double volume = ((length * height) * (length * height)) / ppSqFt;
//
//     std::cout << "Welcome to Paint Estimate Inc.: " << std::endl;
//     std::cout << "The length of the fence you have selected is: " << length << std::endl;
//     std::cout << "The height of the fence you have selected is: " << height << std::endl;
//     std::cout << "Since one square foot of coverage is " << ppSqFt << ".\n"
//               << "The amount needed is: " << volume << " sq. ft.." << std::endl;
//
//     return 0;
// }
