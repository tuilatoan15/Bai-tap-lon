#include "phong.h"
#include "khachhang.h"
#include "date.h" // Định nghĩa dữ liệu ngày tháng

// Định nghĩa cấu trúc dữ liệu DatPhong
struct DatPhong {
    int maDatPhong;
    Phong phong;
    KhachHang khachHang;
    Date ngayBatDau;
    Date ngayKetThuc;
};

// Hàm để tạo một đặt phòng mới
DatPhong taoDatPhong(int maDatPhong, Phong phong, KhachHang khachHang, Date ngayBatDau, Date ngayKetThuc);
