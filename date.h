// Định nghĩa cấu trúc dữ liệu Date
struct Date {
    int ngay;
    int thang;
    int nam;
};

// Hàm để tạo một ngày
Date taoNgay(int ngay, int thang, int nam);

// Hàm để so sánh hai ngày
bool soSanhNgay(Date ngay1, Date ngay2);

