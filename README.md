<<<<<<< HEAD
# ESP32 LED Control with OneButton

## Giới thiệu
Dự án này minh họa cách sử dụng thư viện [OneButton](https://github.com/mathertel/OneButton) để điều khiển **hai LED** bằng **một nút nhấn duy nhất** trên bo mạch phát triển ESP32.

## Phần cứng
- **ESP32 Dev Board**
- **LED1**: LED tích hợp sẵn trên board (built-in LED).
- **LED2**: LED ngoài, nối với 1 chân GPIO bất kỳ (ví dụ GPIO 23).
- **Nút nhấn**: Nối với 1 chân GPIO bất kỳ (ví dụ GPIO 22), kèm điện trở kéo (pull-up hoặc pull-down).

## Chức năng phần mềm
- **Single Click**: Bật/tắt LED hiện tại (LED1 hoặc LED2).
- **Double Click**: Chuyển đổi chế độ điều khiển giữa LED1 và LED2.
- **Long Press**: Giữ nút (>2s) Làm LED đang chọn điều khiển hiện tại nhấp nháy với chu kỳ 200 ms.

## Yêu cầu
- PlatformIO (PIO) cài trên VSCode.
- Thư viện `OneButton` (cài từ PlatformIO Library Manager hoặc qua `platformio.ini`).

## Cách sử dụng
1. Clone dự án về:
   ```bash
   git clone https://github.com/letruongtxtt/esp32-onebutton-2led_control

=======
# esp32-onebutton-led
ESP32 LED control using OneButton (Single click ON/OFF, Double click blink,etc)
>>>>>>> 3f20a65ce12c145391996ea17021d3171a4d7a46
