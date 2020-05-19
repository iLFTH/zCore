// Copyright 2019 The Fuchsia Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// WARNING: THIS FILE IS MACHINE GENERATED BY //tools/kazoo. DO NOT EDIT.

#define ZX_SYS_bti_create 0
#define ZX_SYS_bti_pin 1
#define ZX_SYS_bti_release_quarantine 2
#define ZX_SYS_channel_create 3
#define ZX_SYS_channel_read 4
#define ZX_SYS_channel_read_etc 5
#define ZX_SYS_channel_write 6
#define ZX_SYS_channel_write_etc 7
#define ZX_SYS_channel_call_noretry 8
#define ZX_SYS_channel_call_finish 9
#define ZX_SYS_clock_get 10
#define ZX_SYS_clock_adjust 11
#define ZX_SYS_clock_get_monotonic_via_kernel 12
#define ZX_SYS_clock_create 13
#define ZX_SYS_clock_read 14
#define ZX_SYS_clock_get_details 15
#define ZX_SYS_clock_update 16
#define ZX_SYS_cprng_draw_once 17
#define ZX_SYS_cprng_add_entropy 18
#define ZX_SYS_debug_read 19
#define ZX_SYS_debug_write 20
#define ZX_SYS_debug_send_command 21
#define ZX_SYS_debuglog_create 22
#define ZX_SYS_debuglog_write 23
#define ZX_SYS_debuglog_read 24
#define ZX_SYS_event_create 25
#define ZX_SYS_eventpair_create 26
#define ZX_SYS_exception_get_thread 27
#define ZX_SYS_exception_get_process 28
#define ZX_SYS_fifo_create 29
#define ZX_SYS_fifo_read 30
#define ZX_SYS_fifo_write 31
#define ZX_SYS_framebuffer_get_info 32
#define ZX_SYS_framebuffer_set_range 33
#define ZX_SYS_futex_wait 34
#define ZX_SYS_futex_wake 35
#define ZX_SYS_futex_requeue 36
#define ZX_SYS_futex_wake_single_owner 37
#define ZX_SYS_futex_requeue_single_owner 38
#define ZX_SYS_futex_get_owner 39
#define ZX_SYS_guest_create 40
#define ZX_SYS_guest_set_trap 41
#define ZX_SYS_handle_close 42
#define ZX_SYS_handle_close_many 43
#define ZX_SYS_handle_duplicate 44
#define ZX_SYS_handle_replace 45
#define ZX_SYS_interrupt_create 46
#define ZX_SYS_interrupt_bind 47
#define ZX_SYS_interrupt_wait 48
#define ZX_SYS_interrupt_destroy 49
#define ZX_SYS_interrupt_ack 50
#define ZX_SYS_interrupt_trigger 51
#define ZX_SYS_interrupt_bind_vcpu 52
#define ZX_SYS_iommu_create 53
#define ZX_SYS_ioports_request 54
#define ZX_SYS_ioports_release 55
#define ZX_SYS_job_create 56
#define ZX_SYS_job_set_policy 57
#define ZX_SYS_job_set_critical 58
#define ZX_SYS_ktrace_read 59
#define ZX_SYS_ktrace_control 60
#define ZX_SYS_ktrace_write 61
#define ZX_SYS_nanosleep 62
#define ZX_SYS_ticks_get_via_kernel 63
#define ZX_SYS_mtrace_control 64
#define ZX_SYS_object_wait_one 65
#define ZX_SYS_object_wait_many 66
#define ZX_SYS_object_wait_async 67
#define ZX_SYS_object_signal 68
#define ZX_SYS_object_signal_peer 69
#define ZX_SYS_object_get_property 70
#define ZX_SYS_object_set_property 71
#define ZX_SYS_object_get_info 72
#define ZX_SYS_object_get_child 73
#define ZX_SYS_object_set_profile 74
#define ZX_SYS_pager_create 75
#define ZX_SYS_pager_create_vmo 76
#define ZX_SYS_pager_detach_vmo 77
#define ZX_SYS_pager_supply_pages 78
#define ZX_SYS_pc_firmware_tables 79
#define ZX_SYS_pci_get_nth_device 80
#define ZX_SYS_pci_enable_bus_master 81
#define ZX_SYS_pci_reset_device 82
#define ZX_SYS_pci_config_read 83
#define ZX_SYS_pci_config_write 84
#define ZX_SYS_pci_cfg_pio_rw 85
#define ZX_SYS_pci_get_bar 86
#define ZX_SYS_pci_map_interrupt 87
#define ZX_SYS_pci_query_irq_mode 88
#define ZX_SYS_pci_set_irq_mode 89
#define ZX_SYS_pci_init 90
#define ZX_SYS_pci_add_subtract_io_range 91
#define ZX_SYS_pmt_unpin 92
#define ZX_SYS_port_create 93
#define ZX_SYS_port_queue 94
#define ZX_SYS_port_wait 95
#define ZX_SYS_port_cancel 96
#define ZX_SYS_process_exit 97
#define ZX_SYS_process_create 98
#define ZX_SYS_process_start 99
#define ZX_SYS_process_read_memory 100
#define ZX_SYS_process_write_memory 101
#define ZX_SYS_profile_create 102
#define ZX_SYS_resource_create 103
#define ZX_SYS_smc_call 104
#define ZX_SYS_socket_create 105
#define ZX_SYS_socket_write 106
#define ZX_SYS_socket_read 107
#define ZX_SYS_socket_shutdown 108
#define ZX_SYS_stream_create 109
#define ZX_SYS_stream_writev 110
#define ZX_SYS_stream_writev_at 111
#define ZX_SYS_stream_readv 112
#define ZX_SYS_stream_readv_at 113
#define ZX_SYS_stream_seek 114
#define ZX_SYS_syscall_test_0 115
#define ZX_SYS_syscall_test_1 116
#define ZX_SYS_syscall_test_2 117
#define ZX_SYS_syscall_test_3 118
#define ZX_SYS_syscall_test_4 119
#define ZX_SYS_syscall_test_5 120
#define ZX_SYS_syscall_test_6 121
#define ZX_SYS_syscall_test_7 122
#define ZX_SYS_syscall_test_8 123
#define ZX_SYS_syscall_test_wrapper 124
#define ZX_SYS_syscall_test_handle_create 125
#define ZX_SYS_system_get_event 126
#define ZX_SYS_system_mexec 127
#define ZX_SYS_system_mexec_payload_get 128
#define ZX_SYS_system_powerctl 129
#define ZX_SYS_task_suspend 130
#define ZX_SYS_task_suspend_token 131
#define ZX_SYS_task_create_exception_channel 132
#define ZX_SYS_task_kill 133
#define ZX_SYS_thread_exit 134
#define ZX_SYS_thread_create 135
#define ZX_SYS_thread_start 136
#define ZX_SYS_thread_read_state 137
#define ZX_SYS_thread_write_state 138
#define ZX_SYS_timer_create 139
#define ZX_SYS_timer_set 140
#define ZX_SYS_timer_cancel 141
#define ZX_SYS_vcpu_create 142
#define ZX_SYS_vcpu_resume 143
#define ZX_SYS_vcpu_interrupt 144
#define ZX_SYS_vcpu_read_state 145
#define ZX_SYS_vcpu_write_state 146
#define ZX_SYS_vmar_allocate 147
#define ZX_SYS_vmar_destroy 148
#define ZX_SYS_vmar_map 149
#define ZX_SYS_vmar_unmap 150
#define ZX_SYS_vmar_protect 151
#define ZX_SYS_vmar_op_range 152
#define ZX_SYS_vmo_create 153
#define ZX_SYS_vmo_read 154
#define ZX_SYS_vmo_write 155
#define ZX_SYS_vmo_get_size 156
#define ZX_SYS_vmo_set_size 157
#define ZX_SYS_vmo_op_range 158
#define ZX_SYS_vmo_create_child 159
#define ZX_SYS_vmo_set_cache_policy 160
#define ZX_SYS_vmo_replace_as_executable 161
#define ZX_SYS_vmo_create_contiguous 162
#define ZX_SYS_vmo_create_physical 163
#define ZX_SYS_futex_wake_handle_close_thread_exit 164
#define ZX_SYS_vmar_unmap_handle_close_thread_exit 165
#define ZX_SYS_COUNT 166