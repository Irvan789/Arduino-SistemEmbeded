# Tentang
Mengupload data sensor ke Firebase Realtime database.

# Required Library
- Firebase ESP32 Client

# Konfigurasi Firebase
Lihat [disini](../Pertemuan_2).

# Struktur data
Pada firebase realtime database, data di simpan dalam bentuk [JSON](https://www.json.org/json-en.html). Dalam percobaan kali ini menggunakan struktur data sebagai berikut:
```javascript
{
  "No Absen": {
    "name": "Nama Kamu",
    "sensor": {
      "name": "Nama Sensor",
      "value": "Value Sensor"
    }
  }
}
```

[< Kembali](https://github.com/Irvan789/Sistem-Embeded)