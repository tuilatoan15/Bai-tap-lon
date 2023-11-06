#pragma once

#include <string>

// Định nghĩa cấu trúc dữ liệu Phong
struct Phong {
    int maPhong;
    std::string loaiPhong;
    double giaPhong;
    bool trangThai; // true nếu phòng đã được đặt, false nếu phòng trống
};

// Hàm để tạo một phòng mới
Phong taoPhong(int maPhong, std::string loaiPhong, double giaPhong);
