// ✍🏻 Bài 1. 224A
//Cho biết diện tích của ba mặt có chung đỉnh của hình hộp chữ nhật, tính tổng độ dài 12 cạnh của hình hộp chữ nhật đó.Input 3 số nguyên dương không vượt quá 10 ^ 4 là diện tích của ba mặt có chung đỉnh.Output
// # include <iostream> 
// using namespace std ; 
// int main () { 
//     int a , b , c ; 
//     int x , y , z ; 
//     cin >> a >> b >> c ; 
//     x = (a * c ) / b ; 
//     y = ( a * b ) / c ; 
//     z = ( b * c ) / a  ; 
//     cout << z << " " << y << " " << x << endl ; 
//     cout << " tong do dai 12 canh cua hinh hop chu nhat la : " << 4 * ( x + y + z ) << endl ; 
// }
 





//1️⃣ Bài 1. Phần nguyên, phần dư Tính và in ra phần nguyên, phần dư của phép chia 2 số nguyên a, b.Input 2 số nguyên a, b với b khác 0(-1018 ≤a, b ≤1018)Output
// 4 Đáp án của bài toán được in trên 1 dòng Ví dụ Input Output 100 5 - 20 0 14 6 - 2 2
  


//#include <iostream>
//#include <iomanip>
//using namespace std ; 
//int main () {
 // int a , b ; 
 // cin >> a >> b ; 
  //float thuong = a / b ; 
  //cout << " thuong " << fixed << setprecision(2)<< thuong << endl; 
 // return 0 ; 
//}



//2️⃣ Bài 2. Tính toán giá trị biểu thức
   // Cho biểu thức
    //(x) = x3 + 3x2 + x + 1 Với giá trị của x được nhập từ bàn phím,
    //tính và in ra giá trị của biểu thức trên
    //Input
    //Số nguyên dương x không quá 105
    //Output
    //Kết quả của biểu thức A(x)
//Ví dụ
    //Input Output 2 23

//#include <iostream>
//#include <math.h>
//using namespace std;
//int main()
//{
 // int a, b;
 //cin >> a;
 // b = (a * a * a) + (3 * pow(a, 2)) + a + 1;
  //cout << b << endl;
  //return 0;
//}

// 3️⃣ Bài 3. Tính toán giá trị biểu thức 2 Yêu cầu : Cho ba số nguyên dương a, b và c, hãy tính S = a * (b + c) + b * (a + c).Dữ liệu : Một dòng ba số nguyên a, b, c(0 < | a |, | b |, | c | < 109) 
 // a và b cách nhau một
//      khoảng trắng.Kết quả : Một dòng ghi giá trị S = a * (b + c) + b * (a + c).Ví dụ Input Output 1 2 3 13 

//#include <iostream> 
//using namespace std ; 
//int main () { 
  //int a , b , c, S ; 
  //cin >>a >>b >>c ; 
  //S = a *( b + c ) + b * ( a + c ) ; 
  //cout << S<< endl ; 
  //return 0 ; 
//}




// 4️⃣ Bài 4. Tính tổng, hiệu, tích, thương Nhập vào 2 số nguyên, in ra tổng, hiệu, tích, thương(lấy độ chính xác với 2 chữ số).Input 2 số nguyên a, b với b khác 0(-109 ≤a, b ≤109)
//Output Tổng,
 //hiệu, tích, thương của 2 số Ví dụ Input Output 10 2 12 8 20 5.00 1000000 1000000 2000000 0 1000000000000 1.00
 //‼️ 🎉 1 kinh nghiệm khi làm bài là khi đề bài kêu tính số nếu không phải hệ thì ta có thể cout thẳng ra phép tinh mà không cần khai thêm 1 biến mới rồi gán cthuc vô biến đó rồi mới cout ra !!! 

//#include <iostream> 
// #include <iomanip> 
//using namespace std ; 
//int main () { 
//  long long  a , b  ;
//cin >> a >> b  ; 
//  double c  = a * 1.00 + b ; 
//  cout << c << " " ; 
//  c  = a * 1.00 - b; 
//  cout << c << " "  ; 
// c = float ( a )  * b ; 
//cout << c << " "   ; 
//c = a* 1.00 / b ; 
//cout <<fixed << setprecision (2) << c << "  " ; 
//return 0 ; 
//}

// 5️⃣ Bài 5. Tính chu vi, diện tích hình tròn
//Input
//Bán kính r của hình tròn là một số nguyên.(1≤r≤106)
//Output
//Chu vi và diện tích của hình tròn lấy độ chính xác với 2 chữ số
//Ví dụ
//Input Output
//10 62.80 314.00 

//#include <iostream> 
//#include <math.h> 
//using namespace std ; 
//int main () { 
  //int r   ; 
//cin >> r  ; 
 //r = abs ( r ) ;  
  //cout << " chu vi cua hinh tron la : " <<fixed << setprecision (2)<< 2 * 3.14 * r << endl ; 
  //cout << " dien tich cua hinh tron la " <<fixed << setprecision(2) << 3.14 * r * r << endl ; 
  //return 0 ; 
//}

// 6️⃣ Bài 6. Tính khoảng cách
//Tính khoảng cách Euclid giữa 2 điểm trong hệ tọa độ Oxy
//Input
//Tọa độ của 2 điểm(x1, y1) và(x2, y2) là các số nguyên.(-106 ≤xi, yi ≤106)
//
//Output
///Khoảng cách giữa 2 điểm lấy độ chính xác với 2 chữ số
//6
// Ví dụ
//Input Output
//1 4 4 8 5.00 


//#include <iostream> 
//#include <math.h> 
//#include <iomenip > 
//using namespace std ; 
//int main () { 
 // int x1 , y1 , x2 , y2 ; 
//cin >> x1 >> y1 >> y2 >> x2 ; 
//cout<<fixed << setprecision(2) << sqrt ( pow (( x2 - x1*1.00 ), 2 )+ pow ( ( y2*1.00 - y1*1.00 ) , 2 ))<< endl  ; 
//return 0 ; 
// }

// 7️⃣ Bài 7. Chuyển đơn vị đo C và F
// Công thức chuyển đơn vị đo nhiệt độ từ C sang F như sau : F = (C * 9 / 5) + 32 Viết chương trình C cho phép nhập vào nhiệt độ đo theo độ C là số nguyên dương không quá 106
// thực hiện chuyển sang đơn vị đo độ F và in ramàn hình.(Lưu ý luôn lấy 2 chữ số thập phân sau dấu chấm phẩy)
// Input Output
//  24 75.20   


//#include <iostream> 
//#include <math.h> 
// # include <iomenip> 
//using namespace std ; 
//int main () { 
 // int C ; 
  //cin>> C ; 
  //if ( C <= pow ( 10, 6 )) {  
    //cout << "Gía trị của F là : " << fixed << setprecision(2) << (( C * 9.00 )/ 5 ) + 32 << endl ; 
    //return 0 ; } else { 
    //cout << " mày bị ngu à tao kêu nhập giá trị dưới 10^6 mà con lơn \n " ; 
    //return 0 ; }
 // return 0 ; 
//}

//Bài 8. Tính tổng 1 Sn = 1 + 2 + 3 + 4 + ... + n Input Số nguyên không âm n.(0 ≤ n ≤ 10 8).
//Output Kết quả của bài toán Ví dụ Input Output 1000000000 5000000050000000 


//#include <iostream> 
//#include <iomanip>
//#include <math.h> 
//using namespace std ; 
//int main () { 
  //    int n ;
    //  long long s = (n * (n + 1)) / 2 ;
      //cin >> n ;
     // if (0 <= n <= pow(10, 8))
      //{
        //cout << fixed << setprecision (2)<< s << endl ; 
     // }
//return 0 ; 
//} 
 




//Bài 13. Số chia hết lớn nhất
//Cho 2 số nguyên dương a và b. Tìm số chia hết cho b lớn nhất và không vượt qua a.
//Chú ý không dùng vòng lặp và các hàm có sẵn.
//Input
//2 số nguyên dương a, b ( 1 ≤ b ≤ a ≤108)
//Output
//Kết quả của bài toán
//Ví dụ
//Input Output
//19 5 15
//20 5 20 


//#include <iostream> 
//#include <math.h> 
//#include <iomanip> 
//using namespace std ; 
//int main () {
 // int a , b ; 
 // cin >> a >> b ; 
 // int c = ( a / b ) * b ; 
 // cout << c << endl ; 
  //return 0 ; 
//}

//Bài 15. Kiểm tra số chia hết cho 3 và 5 Input
//  Số nguyên n.(-1018 ≤ n ≤ 1018)
//Output
//In ra 1 nếu n chia hết cho cả 3 và 5,
// ngược lại in ra 0 Ví dụ
//Input Output
//30 1 25 0




//#include <iostream> 
//#include <math.h>
//#include <iomanip>
//using namespace std ; 
//int main () {
  //long long a , b ;  
  //cin >> a ; 
  //if ( a % 3 == 0 && a % 5 == 0 ) {
  //  cout << "1 \n "; 
   // return 0 ; 
  //}else { 
  //  cout << "0\n"; 
  //  return 0 ; 
 // }
  //return 0 ; 
//}

//Bài 16. Kiểm tra năm nhuận
 //   Năm nhuận là năm chia hết cho 400 hoặc(chia hết cho 4 và không chia hết cho 100)
 //       .Input
  //  Năm là một số nguyên.(-106 ≤ n ≤ 106)

        //Output
   // In ra INVALID nếu n là một số nguyên âm hoặc số 0. Nếu n là năm nhuận,
    //in ra YES,

   // ngược lại in ra NO
   //     Ví dụ
       //     Input Output 2021 NO≠

// #include <iostream>
// #include <math.h>
// #include <iomanip>
// using namespace std;
// int main () {
// int n;
// cin >> n;
// if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0))
// {
//   cout << "ÝE \n";
//   return 0;
// } else if ( n <= 0 ) {
//   cout << "INVALID\n" ;
//   return 0;
// } else { 
//   cout << " NO \n " ;  
//   return 0; 
// }

//Bài 17. In ra số ngày của tháng
 //   Input 2 số nguyên t,
//  n lần lượt là tháng và năm.(-106 ≤ t, n ≤ 106)
// Output
//Nếu tháng và năm nhập vào không hợp lệ(tháng, năm không phải là số dương,
//tháng không năm trong các số từ 1 tới 12) in ra INVALID,
// ngược lại in ra số ngày
//    trong năm.Chú ý tháng 2 của năm nhuận có 29 ngày
//   Ví dụ
//  Input Output
// 2 2021 28 1 2021 31 14 2020 INVALID
// - 1 2019 INVALID
// 2 2020 29

//Bài 18. Kiểm tra chữ in thường
//Input
//Kí tự cần kiểm tra
//Output
//In ra YES nếu kí tự nhập vào là chữ cái in thường,
// NO trong trường hợp ngược lại
///Ví dụ
//Input Output
//A NO
//a YES %
 //NO

//Bài 27. Chuyển đổi ngày sang tháng, năm, ngày Viết chương trình C cho phép nhập vào số ngày, thực hiện chuyển số ngày sang năm, tuần, ngày(Bỏ qua trường hợp năm nhuận) Input Số nguyên n không âm.(0 ≤ n ≤ 106)
//Output Chuyển số ngày đã cho xem số năm,
// số tháng, số ngày Ví dụ Input Output 373 1 1 1






//#include <iostream> 
//#include <math.h> 
//#include <iomanip> 
//using namespace std ; 
//int main () { 
  //int nam ,  thang , ngay , tongsongay ; 
  //cin >> tongsongay ; 
  //nam = tongsongay / 365 ; 
  //cout << nam<< endl ; 
  //thang = ( float(( tongsongay % 365 ) )* 365 ) / 30 ; 
  //cout << thang << endl ; 
  //ngay = (float(( thang % 30 ) )* 30 ) / 1 ; 
  //cout << ngay<< endl ; 
  //return 0 ; 
// }

// DAY 2 :
// Nhập vào n nguyên dương, tính và in kết quả của dãy phép tính sau đây.
//S = -1 + 2 - 3 + 4 - 5 + .....+ (-1) ^ n * n 



//#include <iostream> 
//#include <math.h> 
//#include <iomanip> 
//using namespace std ; 
//int main () { 
  //    int n ;  
    //  long long S= 0 ; 
     // cin>> n ; 
     // if ( n > 0 ){ 
      //  for ( int i = 1  ; i <= n ; i++ ) { 
       //   S +=  pow ( (-1), i ) * i ; 
       // }
      //}

       //cout << S<< endl ; 


// }.







//.  Bài 7.
    // Nhập vào n nguyên dương, tính và in tổng sau ra màn hình.S = 2 + 4 + 6 + 8 + ...... + 2 * n 




   // #include <iostream> 
   // #include <math.h> 
   // #include <iomanip> 
    //using namespace std ; 
    //int main () { 
     //    int n ; 
       //  int S = 0 ;  
       //  cin>>n ; 
       //  if ( n > 0 ) { 
        //  for ( int i = 1 ; i <= n ; i ++  ) { 
         //   S += i * 2 ; 
         // }
         //}  
         //cout << S << endl ; 
         //return 0 ; 
    //}

// Bài 9. Nhập vào n và tính tổng sau, kết quả in ra màn hình.S = 1 ^ 3 + 2 ^ 3 + 3 ^ 3 + 4 ^ 3 + ...... + n ^ 3. 



//#include <iostream> 
//#include <math.h> 
//#include <iomanip> 
//using namespace std ; 
//int main () { 
  //   int n ; 
   //  cin>> n; 
    // int S = 0 ; 
    // if ( n > 0 ) { 
     // for (int i = 1  ; i <= n ; i  ++ ) { 
      //  S += pow ( i , 3 ) ; 
    //  }
    // } 
    // cout << S<< endl ; 

//}

//Bài 12. Nhập vào n(0 <= n <= 10 ^ 18), đếm số lượng chữ số của n và in ra kết quả.Ví dụ
//Input
//123456789 
//Output 9

//#include <iostream>
//#include <math.h>
//#include <iomanip>
//using namespace std;
//int main()
//{
 // int SL = 0;
 // long long n;
 // cin >> n;
 // for (; n != 0; n /= 10)
 // {
 //   SL++;
 // }
 // cout << SL << endl;
//}
 
#include <bits/stdc++.h> 
using namespace std ; 

long long  giaithua ( int n ) {
  long long s = 1;
  if ( n >= 0 )  {

    for ( int i = 1  ; i <= n ;i++  ) { 
       s *= i ; 
    }
  }
  return s ; 
} 

int main () { 
  int n ; 
  cin >> n ;  
  cout << giaithua (n) << endl ; 
  ios::sync_with_stdio(false) ; 
  cin.tie(nullptr) ; 
  return 0 ; 
}