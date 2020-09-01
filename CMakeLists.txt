cmake_minimum_required(VERSION 3.14)
project(lab04-solid)

set(CMAKE_CXX_STANDARD 17)
add_executable(game Game.h Game.cpp MainGame.cpp Physical.cpp Physical.h Streaming.cpp Streaming.h Digital.cpp Digital.h IDiscount.h IShipment.h IReplace.h ISave.h IReceiptSender.h PrintReceipt.h EmailReceipt.h ScreenReceipt.h EmailReceipt.cpp PrintReceipt.cpp ScreenReceipt.cpp GameManager.cpp GameManager.h IReceiptSender.cpp)