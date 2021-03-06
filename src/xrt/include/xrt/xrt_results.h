// Copyright 2020, Collabora, Ltd.
// SPDX-License-Identifier: BSL-1.0
/*!
 * @file
 * @brief  Internal result type for XRT.
 * @author Christoph Haag <christoph.haag@collabora.com>
 * @ingroup xrt_iface
 */

#pragma once

typedef enum xrt_result
{
	XRT_SUCCESS = 0,

	/*!
	 * The operation was given a timeout and timed out.
	 *
	 * The value 2 picked so it matches VK_TIMEOUT.
	 */
	XRT_TIMEOUT = 2,

	XRT_ERROR_IPC_FAILURE = -1,
	XRT_ERROR_NO_IMAGE_AVAILABLE = -2,
	XRT_ERROR_VULKAN = -3,
	XRT_ERROR_OPENGL = -4,
	XRT_ERROR_FAILED_TO_SUBMIT_VULKAN_COMMANDS = -5,
	/*!
	 *
	 * Returned when a swapchain create flag is passed that is valid, but
	 * not supported by the main compositor (and lack of support is also
	 * valid).
	 *
	 * For use when e.g. the protected content image flag is requested but
	 * isn't supported.
	 */
	XRT_ERROR_SWAPCHAIN_FLAG_VALID_BUT_UNSUPPORTED = -6,
	/*!
	 * Could not allocate native image buffer(s).
	 */
	XRT_ERROR_ALLOCATION = -7,
	/*!
	 * The pose is no longer active, this happens when the application
	 * tries to access a pose that is no longer active.
	 */
	XRT_ERROR_POSE_NOT_ACTIVE = -8,
	/*!
	 * Creating a fence failed.
	 */
	XRT_ERROR_FENCE_CREATE_FAILED = -9,
	/*!
	 * Getting or giving the native fence handle caused a error.
	 */
	XRT_ERROR_NATIVE_HANDLE_FENCE_ERROR = -10,
	/*!
	 * Multiple not supported on this layer level (IPC, compositor).
	 */
	XRT_ERROR_MULTI_SESSION_NOT_IMPLEMENTED = -11,
	/*!
	 * The requested format is not supported by Monado.
	 */
	XRT_ERROR_SWAPCHAIN_FORMAT_UNSUPPORTED = -12,
	/*!
	 * The given config was EGL_NO_CONFIG_KHR and EGL_KHR_no_config_context
	 * is not supported by the display.
	 */
	XRT_ERROR_EGL_CONFIG_MISSING = -13,
	/*!
	 * Failed to initialize threading components.
	 */
	XRT_ERROR_THREADING_INIT_FAILURE = -14,
	/*!
	 * The client has not created a session on this IPC connection,
	 * which is needed for the given command.
	 */
	XRT_ERROR_IPC_SESSION_NOT_CREATED = -15,
	/*!
	 * The client has already created a session on this IPC connection.
	 */
	XRT_ERROR_IPC_SESSION_ALREADY_CREATED = -16,
} xrt_result_t;
