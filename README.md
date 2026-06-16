# 🏥 Hospital Management System (C++ Linked List Project)

## 📌 Description
A console-based Hospital Management System developed in C++ using linked lists. The system manages doctors, patients, and appointments, allowing booking, editing, and viewing appointment details with role-based access for doctors and admin.

---

## ✨ Features
- Add doctor profiles with specialization and schedule
- Book patient appointments (normal & emergency)
- Edit existing appointments
- View all appointment details
- Doctors can check assigned patients
- Admin can view total doctors and appointments
- Password-protected admin access
- Linked list-based dynamic data handling

---

## 🧱 Data Structures Used
- Singly Linked List (for doctors and patients)
- Node-based dynamic memory allocation
- Global pointers for list management

---

## 👨‍⚕️ Doctor Module
- Add doctor details (name, specialization, timings, etc.)
- Unique doctor ID generation
- View assigned patients based on password authentication
- Check patient appointment queue

---

## 🧑‍🤝‍🧑 Patient Module
- Book appointment with available doctors
- Emergency appointment system (priority insertion)
- Edit appointment details (name, age, doctor, mobile)
- View appointment history

---

## 🛠️ Admin Module
- View total number of doctors
- View doctor details by ID
- View total appointments
- View appointment details by appointment number
- Password protected access

---

## 🔐 Security Features
- Admin password authentication
- Doctor password verification for patient access

---

## 🛠️ Technologies Used
- C++ Programming Language
- Object-Oriented Programming (OOP)
- Linked List Data Structure
- Console Application

---

## 🚀 How to Run

### Step 1: Compile the program
```bash
g++ hospital_system.cpp -o hospital_system
