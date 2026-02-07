// 📚 BÀI 1 : Kiểu dữ liệu cơ bản trong C++ 
// nếu cout << chữ ra màn hình mà khôgn có "" máy tinhs sẽ tưởng lộn chữ đos là biến và sẽ khôgn nhận  
// số byte / bit trong từng mẫu chữ khai báo biến là đều có lí do của nó vì nếu làm việc chuyên nghiệp mà ta cứ spam những lênhk khai báo biến lớn như long long hay double sẽ khiến cho bộ nhớ bị tràn và code sẽ bị quá tải 
//đồng thời cũng sẽ giúp cho code chạy nhanh hơn - chính xác hơn ( vì máy cần xử lí ít hơn)
// muốn máy tính hiển thị cái gì đó thì 1 là khai báo nó trước 2 là phải để trogng dấu "" ( khai báo biến chỉ có thể khai báo những chữ số dính liền nhau )  
// khai báo biến là khai báo những biến mỡi chưa xuát hiện trong mã 
// gán biến là gán giá trị của biến ĐÃ CÓ SẴN lại với nhau 
// Số nguyên
// int = 4 byte = 32 bit
// longlong = 8 byte = 64bit
// unsinged int ( khong dau )
// unsinged longlong ( khong dau )
// So thuc
// float = 4 byte = 32 bit ( thap phan )
// double = 8 byte = 64 bit ( thap phan )
// Ki tu = char = 1 byte = 8 bit ( nhap chu )
// Dung sai = bool = true,false = 1 byte ( -> ra 1 va o vi trong c++ quy dinh true false la 1 0 )
// endl = xuong dong khi ket thuc 1 doan ( su dung neu muon xuong dong con ko thi ko sai )
// "" khi sai trong cout no co nghia la in ra terminal
// Bien = <kieu du lieu>  <ten bien>  = <gia tri>;
// double chuvi = 3.14;















//📚 Bài 2 : Các toán tử cơ bản trong C++ 
// TOÁN TỬ TOÁN HỌC : 
//trong lập trình có 8 loại toán tử toán học laf ( = , + , - , * ,/ , % ( số dư ) , ++ , -- )
// muốn lưu dữ liệu dưới dạng số thực thì phải khai báo biến dươis dạng số thực ( float , double )  
// chỉ có 1 số lưu ý khi sử dụng toán tử chia ( /) là nếu cả 2 biến đều là số nguyên thì kết quả sẽ là s ố nguyên mà không có phân số ( tức nếu chia 10/3 = 3 chứ ko phải 3.33 ) 
// muốn lưu kết quả dưới dạng số thực thì phải có ít nất 1 biên là số thực ( float , double )  
// có thể nhét ( float hoặc double ) hoặc 1. n số 0 muốn hiện vào trước biến số nguyên để chuyển duy nhất số nguyên đó trong dãy đó thành số thực còn tất cả những dãy khác sẽ vẫn là số nguyên ( kiểm soát bộ nhớ tốt hơn/ đây như là mẹo để kiểm soát bộ nhớ hiệu quả hơn )  
 
// có thêm 1 kiểu toán tử nữa là  ( biến ++ ) hoặc ( ++ biến ) tức là tăng gía tri của biến lên 1 đơn vị ( khá ít sài chỉ sài khi nguy cấp )  
// khi muốn gán giá trị cộng dồn tổng của biến + n = biến ( a = a + n ) thì ta có thể viết tắt là a += n ( và tương tự với các toán tử khác )  ( VD LÀ : a = a+ b <=> a = a+=b ) 
 

// TOÁN TỬ SO SÁNH : 
// có 6 loại toán tử so sánh trong c++ là ( < , > , <= ; >= , == , ! = ) và loại toán tư này sử dụng trong true / false và if 
// *  [ == ( là so sánh giữa 2 biến với nhau )còn = này là ( gán giá trị giữa giá trị này với gía trị này ) ] 
// kết quả trả về sẽ là true / false ( đúng hoặc sai )  
// * [ ! = ( khác nhau ) ]  

// TOÁN TỬ LÔGIC : 
// có 3 loại toán tử logic trong c++ là : And ( && ) , Or (||) , Not ( ! )  
// And ( && ) : đúng khi cả 2 mênhj đề đều đúng 
// Or ( || ) : đúng khi ít nhất 1 mệnh đề đúng 
// Not ( ! ) : phủ định lại mệnh đều ( từ sai thành đúng từ đúng thành sai )

// 💥 => BỔ ĐỀ : giới thiệu thêm 1 thư viện mới rất hay là thư viện <math.h> ( thư viện mở rộng thêm các dấu hoặc định lí toán hoc )
// => những hàm phổ biến trong thư viện này là :  abs (x) ( giá trị tuyệt đối của x )
// pow (a,b) => tính a ^ b : trả về số double ( nhưng nếu khôgn muốn nó hiện số thập phân thì phải gán biến của nó là số nguyên (int-longlong))
// sqrt (n) : tính căn bân 2 của n : cũng trả về số double và cơ chế hiển thị của nó giống với pow
// round (a) : làm tròn số a ( làm tròn dựa vào số thập phân ) : cũng trả về số double và cơ chế để hiển thị của nó giống với pow 
 // ==> BỔ ĐỀ : thêm 1 thư viện phổ biến khác nữa ngoài <iostream> và <math.h> là <ionanip> 
// fixed << setprecision(n)( # include <ionasip> )  (lam tron so n ).







// 📚 BÀI 3 : CẤU TRÚC RẼ NHÁNH TRONG C++
// 🎯 IF ( condition ) {}
// => nếu condition đúng thì nó sẽ thực hiện những thứ trong {}
// => nếu condition sai thì nó sẽ  không thực hiên những thứ trong {} mà sẽ thực hiện những dòng ở ngoài
// ‼️  => nếu muốn khi condition sai sẽ thực hiện một khối lệnh khác thì ta sẽ có cấu trúc if ( condition) {} else {} ( chỉ có else lệnh chứ khôgn có else điều kiện vì điều kiện là để triển khai lệnh này là if sai rồi )
// ‼️ if có thể đi riêng lẻ 1 mình nhưng else phải đi cùng với if
// => nếu thực hiện nhiều nhánh khác nhau mà cần quá phức tạp thì ta dùng if ( condition) else if (n conditions) nó sẽ gọn và thuận tiện hơn ( sử dụng cái này nhanh và gọn hơn đồng thời khi sử dụng else if thì nó sẽ không xét hết các biến )
// ‼️ hay vì cứ if rồi else trồng lên nhau sẽ rất phức tạp và rối nên khi mà muốn xét nhiều đkien phải sài if  conditions ) else if ( n condition )
// ⚠️ khi sài if , else if thì khi nghi điều kiện ( conditions ) xong thì ngoặc nhọn phải xuống dòng thì máy mới nhận mã code { }
// 🎯 SWITCH CASE
// ⚠️ switch case chỉ sài được với kiểu biến sô nguyên ( int , longlong , char ) chứ không sài được với kiểu biến số thực ( float , double ) + khi sài switch case thì dù giá trị khớp rồi nó vẫn sẽ chạy những dòng lệnh ở bên ngoài mà không dừng lại như if 
// 📝 switch case là so sánh các giá trị của biến với các trường hợp ( case ) khác nhau và thực hiện các lệnh tương ứng với từng case đó => khi so sánh biến đêns case nào mà case đó thoả mãn thì sẽ thực hiện các lệnh có trong case đó 
// 📝 nếu muốn khi tất cả các case sai thì sẽ thực hiện 1 khối lệnh khác giống else bên cấu trúc if ta sẽ sài default  
// ‼️ khi sài switch case thì phải có : sau mỗi case và default 
//  💻 cấu trúc của switch case như sau :
// switch ( biến cần xét - expression ) {
// case giá trị x :
// break ;
// case giá trị y :
// break ;
// }
// 🤯 SỰ KHÁC NHAU CỦA IF - VỚI SWITCH CASE LÀ  :
// 👉🏻 If - else if sử dụng khi điều kiện phức tạp , phải sử dụng biểu thức logic + toán tử so sánh  + phải sự dụng được số linh hoạt
// 👉🏻 switch case thì chỉ sử dụng được số nguyên + chỉ sự dụng toán tử == nên chỉ sử dụng khi điều kiện đơn giản
// 📌 vậy khi ĐIỀU KIỆN PHỨC TẠP ( phải sử dụng > , <.  <= ,>= , ... )thì ta sài IF - ELSE IF 
// 📌 còn khi điều kiện đơn giản ( chỉ phải sài == và số nguyên ) thì ta sài SWITCH CASE





// 📚 BÀI 4 : Vòng Lặp Trong C++ | Vòng Lặp For, While Và Do-While
// 📝 for ( stament 1 - khai báo biến ; stament 2 - điều kiện của vòng lặp , stament 3 - thay đổi của hàm )  {  .... - lệnh mà muốn lặp lại       }
// ✍🏻 cách thức thực hiện của hàm for là :
// Trong lần đầu tiên thục hiện hàm nó sẽ dùng stament 1 so sánh với stament 2 .
// trong những lần sau tuỳ thuộc vào độ lớn thây đổi của stament 3 ta khai báo mà sẽ có số vòng lặp nó sẽ lặp lại
// ✍🏻 Các lệnh thay đổi độ lớn là : += ; -=, *=, /=, ++, -- ➕ (độ lớn của số muốn tăng)
// ✍🏻 Ta có thể ngắt hàm for bằng lệnh if () { break ; } để bắt buộc mát tính dừng lại ở điều kiện nào đó mà ta đặt
// ✍🏻 coutinues sử dụng khi ta không muốn thực hiênj những lệnh còn lại ở trong for nữa túc khi 1 hàm for có 3 dòng cần đc in ra nhưng countinués nằm dưới dòng 1 thì 2 dòng kia sẽ bị coutinues chặn lại mà không in ra 2 dòng ở dưới nữa  
// 🏫 VÍ DỤ : ... for ( a = 2 ; a <= 100 , a++ ) { cout << " hello ae " }
//                                                 coutinues 
//                                                 ......... 
// -> nó chỉ in ra môix lệnh thứ 1 thôi còn những lệnh ở dưới coutinues sẽ bị chặn mà không được thực hiện 
// 🏫 VÍ DỤ :
// ... for ( int a = 1 -> khai báo biến a ; a <=  10 -> điều kiện của vòng lặp ; a++ -> độ lớn thay đổi của hàm ) 
// 1️⃣ vậy tức lần đầu máy tính sẽ so sánh a =1 với a <= 10 -> ✅ -> thực hiện lệnh trong {} lần 1️⃣
// 2️⃣ lần thứ 2 máy tính sẽ so sánh a = 2 ( vì độ lớn thay đổi là ++ là cộng 1 đơn vị vô giá trị lúc đầu )-> ✅ -> thực hiện lệnh trong {} lần 2️⃣
// cứ cộng 1 như vậy cho tới lần thứ 11 khi đó a = 11 khi so sánh với điều kiện a<= 10 thì sẽ sai -> ❌ -> dừng việc thực hiện lệnh
// 🤯 hàm for ( stament 1 ; stament 2 ; stament 3 ) có thể bị khuyết 1 hoặc 2 phần hoặc 3 phần
// 🤯ta có thể lồng các phép khác vô trong hàm for giống hàng if

// 📝 WHILE 
// ✍🏻 ta sử dụng vòng lặp while khi muốn thực hiện 1 vòng lặp vĩnh viễn hay cách khác là 1 vòng lặp mà ta không biết trước được điểm dừng ( THƯỜNG LÀ VẬY VÌ CÁCH SÀI CỬA WHILE GIỐNG Y HẾT FOR ) 
// int i ...  - stament 1 , hoặc các bài toán cần tách các chữ số ra để tính 
// while ( điều kiện - stament 2   ) { 
// hàm số  
// độ lớn cộng thêm - stament 3  } 
// khi ta có while điều kiện bằng những số khác 0 thì nó sẽ chạy vĩnh viến còn khi bằng 0 thì nó sẽ ko chạy mã 






// 📝 DO WHILE 
// ✍🏻 cấu trúc là : 
// do {   }
// while ( conditions )

// 📚 BÀI 6 : Hàm Trong Ngôn Ngữ Lập Trình C++
// 📝 ta có 1 thư viện mới giúp tổng hợp tất cả thư viện trong c++ bên trong đó là  ‼️ #include<bits/stdc++.h>
// 📝 ta có thêm 2 câu lệnh trick lỏ giúp tiết kiệm thời gian chạy thuật toán đó chính là
// ‼️ ios::sync_with_stdio(false);  ( trong thi đấu hsg nên sài )
// ‼️ cin.tie(nullptr); 

// ✍🏻 cú pháp ( syntax ) của hàm là : 
// <kiểu trả về (int , void , ... )> <tên hàm ( tự do đặt )> ( khai báo tham số của hàm [đầu vào - input của hàm - hàm sẽ lấy các con số trong đây để tính toán và trả lại kết quả tương ứng ]  ) { câu lệnh cần thực hiện }  

// ✍  cách để gọi hàm trong main là ( <tên hàm> ( giá trị của tham số ) ) 
// ví dụ : cho hàm void 
// # include <bits/stdc++.h> 
// using namespace std ; 

// void baovd1 () { 
// cout << " bẻo học giỏi phết nhỉ " << endl ; } 
// int main () {
// baovd1 () ; 
//  } 

// VÍ DỤ : cho những hàm còn lại 
// #include <bits.stdc++.h> 
// using namespace std ; 

// int baovd2 (int a , float b , double c , char d ) { 
//  cout << a << " " << b << " " << c << " " << d << endl ; 
//  cout << ( a + b + c) / ( b + c + 100 ) << endl ; 
// return 0 ; 
// }  

// int main () { 
// ‼️ ( phải khai báo biến trước khi gọi hàm nếu không sẽ bị lỗi ) int a ; 
// float b ; 
// double c ; 
// char d ; 
// cin >> a >> b >> c >> d ; 
// baovd2 ( a , b , c, d ) ;  
// return 0 ; 
// } 

// 📌 LƯU Ý : khi muốn nhấp số từ bàn phím ( tức cin ) vô trong hàm thì trc tiên phải khai báo nó trước néu không muốn khai báo thì ta phải điền thẳng số vô ô () tham số trong main .  

// 📌 khi ta chỉ đặt khai báo trong hàm là int thì khi nhập dữ liệu ở trong main máy tính sẽ cố gắng chuyển đổi tất cả những giá trị đó về số nguyên chứ không giữ số ta nhập ( ví dụ: điền 10 , 10.1 và a vô ô giá trị tham số trong phần main máy tính sẽ tự đôgnj chuyển all về int => output sẽ là : 10 ; 10 ; mã nhị phân của a ) => máy tính sẽ báo lỗi nếu nó cố gắng chuyển qua dạng int nhg không thành công  


// 📝 kiểu trả về của hàm có 2 loại là : 
// 1️⃣ kiểu trả về có giá trị ( int , longlong , float , double , char , bool , ... ) khi ta muốn máy tính phải thực hiện 1 phép toán cụ thể nào đó sau đó trả về kết quả cho chúng ta khi ta gán giá trị vào tham số ( ví dụ tạo 1 hàm tính giai thừa ! ; tính số chẵn lẻ ; tổng ; ... )
// 2️⃣ kiểu trả về không có giá trị ( void ) khi máy tính không cần thực hiện phép tính chỉ đơn giản là thực hiện thẳng câu lệnh có trong hàm mà ko phải tính toán ( ví dụ như in ra màn hình " BẢO BẢO ĐẸP TRAI 😊 " => không cần máy tính 🧮 để đưa ra kết quả 

// 🧑🏻‍💻 Mẹo để nhớ dễ hơn : Hàm cũng chỉ giống như lệnh gán nhưng hay vì chỉ gán những thứ đơn giản hàm lại gán bằng những lệnh phức tạp hơn yêu cầu nhiều dòng lệnh hơn chứ không phải chỉ đơn giản chỉ là 1 dòng nữa => qua đó cũng giúp cho bài code của ta găns gọn hơn ( ví dụ 1 lệnh đó phải sài đi sài lại nhiều lần nhưng lại dài 5 dòng  - 10 dòng hay thậm chí là 100 dòng thì thay vì lúc nào cần sài phải copy - paste nó ra ta có thể dùng hàm gắn nó với 1 tên cố định và khi cần sài chỉ cần bùm , nhập 3 4 từ vào là ta có thể có 100 dòng code ta đã code trc đó mà ko khiến code bị rối ) 

// ‼️ lƯU Ý : khi khai báo hàm thì phải khai báo trc main còn định nghĩa hàm thì có thể định nghĩa trc main hoặc sau main đều đc ( nhưng hay định nghĩa sau main để dễ nhìn code hơn ) 
// ‼️ LƯU Ý 2 : khi khai báo hàm thì phải khai báo đúng kiểu trả về của hàm ( ví dụ khai báo hàm là int thì định nghĩa hàm cũng phải là int ) 
// ‼️ LƯU Ý 3 : khi khai báo hàm là kiểu trả về có giá trị ( int , longlong , float , double , char , bool , ... ) thì trong định nghĩa hàm phải có lệnh return <giá trị trả về> ; còn nếu khai báo hàm là kiểu trả về không có giá trị ( void ) thì trong định nghĩa hàm không cần lệnh return <giá trị trả về> ;
// ‼️ LƯU Ý 4 : khi lệnh chạy đến return sẽ dừng lại không chạy những lệnh ở dưới nữa ( trừ khi lệnh return nằm trong if , else , for , while , do while thì nó sẽ chỉ dừng lại trong khối lệnh đó thôi ) 
// => Vi dụ : if ( a > b ) 
//  return a ; 
// else             => khi a > b thì nó sẽ return a và dừng lại không chạy else nữa còn khi a <= b thì nó sẽ chạy else mà bỏ qua return a 
// return b ;  

// 📌 Luu Ý 5 : khi làm 1 hàm tính toán ( int , long long , ... ) thì ta phải tận dụng triệt để return lẫn cẩn thận return . 
// ví duj ; khi đề bài cho in ra 3 lênhj thì thay vì cout cả 3 lệnh ra và rồi return 0 thì mã lênhj sẽ bị thừa 1 số 0 thì ta tận dụng luôn chỉ 2 lênhk cout và 1 lệnh return để tiết kiệm bộ nhớ và code gọn hơn vì khi khai báo hàm bằng int thì bắt buộc phải có return mà không có return máy tính sẽ báo lỗi vì thế phải cực kì cần thânj khi khai baos hàm 