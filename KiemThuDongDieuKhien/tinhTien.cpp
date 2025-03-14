#include "tinhTien.h"

float tinhTien(int so_ve_thuong, int so_ve_vip, int tuoi, bool khach_hang_than_thiet) { 
  if (so_ve_thuong < 0 || so_ve_thuong > 10000) return -1;

  if (so_ve_vip < 0 || so_ve_vip > 10000) return -1;

  if (tuoi <= 0 || tuoi > 150) return -1;

  int gia_ve_thuong = 10; int gia_ve_vip = 20; 
  float tong_tien = (so_ve_thuong * gia_ve_thuong) + (so_ve_vip * gia_ve_vip);

  if ((tuoi <= 14 || tuoi >= 65) && khach_hang_than_thiet) { 
    tong_tien *= 0.8; 
  } 
  else if ((tuoi <= 14 || tuoi >= 65) || khach_hang_than_thiet) { 
    tong_tien *= 0.9; 
  } 

  return tong_tien; 
}
  

  