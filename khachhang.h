#pragma once

#include <cstring>

// Định nghĩa cấu trúc dữ liệu KhachHang
struct KhachHang {
    int maKhachHang;
    std::string tenKhachHang;
    std::string soDienThoai;
    std::string email;
    bool laThanhVien; // true nếu là thành viên, false nếu không phải
};

// Hàm để tạo một khách hàng mới
KhachHang taoKhachHang(int maKhachHang, std::string tenKhachHang, std::string soDienThoai, std::string email);
