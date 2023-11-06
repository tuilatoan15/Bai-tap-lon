#pragma once

#include <iostream>
#include <cstring>
#include <vector>
#include "phong.h" // Định nghĩa dữ liệu phòng
#include "khachhang.h" // Định nghĩa dữ liệu khách hàng
#include "datphong.h" // Định nghĩa dữ liệu đặt phòng

// Quản lý phòng
void themPhong(Phong phong);
void xoaPhong(int maPhong);
void chinhSuaPhong(int maPhong, Phong phongMoi);
vector<Phong> danhSachPhongTrong();
Phong timPhongTheoMa(int maPhong);
vector<Phong> timPhongTheoLoai(string loaiPhong);

// Quản lý đặt phòng
void datPhong(KhachHang khachHang, Phong phong, Date ngayBatDau, Date ngayKetThuc);
void huyDatPhong(int maDatPhong);
vector<DatPhong> danhSachDatPhongChoPhong(int maPhong);
vector<DatPhong> danhSachDatPhongCuaKhachHang(int maKhachHang);

// Quản lý khách hàng
void themKhachHang(KhachHang khachHang);
void xoaKhachHang(int maKhachHang);
void chinhSuaKhachHang(int maKhachHang, KhachHang khachHangMoi);
vector<KhachHang> danhSachKhachHang();

// Tìm kiếm và lọc
vector<Phong> timPhongTheoGia(double gia);
vector<Phong> timPhongTrongTheoLoai(string loaiPhong);
vector<KhachHang> timKhachHangTheoTen(string tenKhachHang);

// Thống kê và báo cáo
void thongKeDoanhThu(Date ngayBatDau, Date ngayKetThuc);
vector<Phong> danhSachPhongDatNhieuNhat();
vector<KhachHang> danhSachKhachHangThanhVien();

// Giao diện người dùng
void inMenuChinh();
void inThongTinPhong(Phong phong);
void inThongTinKhachHang(KhachHang khachHang);

// Quản lý tài khoản
bool dangNhap(string taiKhoan, string matKhau);
void doiMatKhau(string taiKhoan, string matKhauMoi);

// Thư viện tệp
void luuDanhSachPhongVaoFile();
void docDanhSachPhongTuFile();
void luuDanhSachKhachHangVaoFile();
void docDanhSachKhachHangTuFile();
