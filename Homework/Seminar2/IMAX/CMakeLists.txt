cmake_minimum_required(VERSION 3.14)
project(IMAX)

set(CMAKE_CXX_STANDARD 17)

add_executable(IMAX main.cpp Ticket.cpp Ticket.h SingleTicket.cpp SingleTicket.h GroupTicket.cpp GroupTicket.h TicketFunction.cpp TicketFunction.h)