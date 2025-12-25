# hava-savunma-sistemi
# Step Motor Alt Sistem Yazılımı

Bu proje, step motor kontrolünü donanımdan bağımsız şekilde
tasarlamak amacıyla geliştirilmiştir.

## Amaç
- Step motorun hız, ivme ve pozisyon davranışını yazılımsal olarak modellemek
- Motor sürücüsü ve mikrodenetleyici detaylarından bağımsız çalışmak
- Alt sistem arayüzü ve alt sistem yazılımı kavramlarını uygulamak

## Özellikler
- Donanımdan bağımsız motor çekirdeği
- Soyut motor ve limit switch arayüzleri
- Durum makinesi tabanlı homing algoritması
- Kütüphane kullanmadan tasarlanmış kontrol mantığı

## Kapsam Dışı
- Pin sürme
- Timer yapılandırması
- Sürücüye özel kodlar

Bu işlemler, sistemin HAL (Hardware Abstraction Layer) katmanında
gerçekleştirilmelidir.

