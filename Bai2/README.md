## Đặt bài toán 

- Phần cứng: Chỉ có một nút bấm nhả (push button) kết nối với chân GPIO5 và hai đèn LED hiển thị, một LED tích hợp sẵn trên dev board, một LED ngoài kết nối với chân GPIO4  
- Yêu cầu Viết chương trình có chức năng sau:
    + Chỉ sử dụng nút bấm trên để thực hiện chức năng điều khiển hai LED
    + Khi double click sẽ chuyển chế độ điều khiển giữa hai LED (LED và LED2)
    + Khi single click sẽ bật tắt cái LED đang được điều khiển (LED1 hoặc 2, đã chọn ở bước 1)
    + Khi giữ nút nhấn sẽ làm cái LED đang được điều khiển nhấp nháy 200ms một lần. 

## Cách thực hiện

- Ở đây tôi sẽ chỉ nói đến việc chỉnh sửa code:
  + Cái khó nhất của bài toán này là làm thế nào để tại một thời điểm chỉ chọn một LED để hoạt động thì ở đây tôi sử dụng thêm 2 biến là stt và a.
  + a là một biến đếm nó sẽ bắt đầu tại giá trị 0 và tăng 1 giá trị mỗi khi hoàn thành một lần Doubleclick
  + stt là biến điều kiện để xác định LED hoạt động giá trị của stt = a % 2 +1 (khi đó stt sẽ chỉ có 2 giá trị là 1 hoặc 2 phù hợp với bài toán)
  + Môi khi stt có giá trị là 2 thì LED2 sẽ được dùng để thao tác. Ngược lại với stt=1 thì ta sẽ thao ác trên LED1.

## Mục đích DEMO

- Tự thao tác và thực hiện dự án tại nhà qua đó làm quen với việc sử dụng VSCode cũng như GitHub

