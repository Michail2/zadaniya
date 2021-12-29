#ifndef UNTITLED2_MYX_CMAKE_CONFIG_HPP_
#define UNTITLED2_MYX_CMAKE_CONFIG_HPP_

#pragma once

#define UNTITLED2_VERSION_STR "0.3.0"
#define UNTITLED2_VERSION_INT 768

#if defined (MYX_CMAKE_ORGANIZATION_NAME)
#error "Duplicate definition of macros MYX_CMAKE_ORGANIZATION_NAME"
#else
#define MYX_CMAKE_ORGANIZATION_NAME "Org."
#endif

#if defined (MYX_CMAKE_ORGANIZATION_NAME_LOWER)
#error "Duplicate definition of macros MYX_CMAKE_ORGANIZATION_NAME_LOWER"
#else
#define MYX_CMAKE_ORGANIZATION_NAME_LOWER "org."
#endif

#if defined (MYX_CMAKE_ORGANIZATION_NAME_UPPER)
#error "Duplicate definition of macros MYX_CMAKE_ORGANIZATION_NAME_UPPER"
#else
#define MYX_CMAKE_ORGANIZATION_NAME_UPPER "ORG."
#endif

#if defined (MYX_CMAKE_PROJECT_NAME)
#error "Duplicate definition of macros MYX_CMAKE_PROJECT_NAME"
#else
#define MYX_CMAKE_PROJECT_NAME "untitled2"
#endif

#if defined (MYX_CMAKE_PROJECT_NAME_LOWER)
#error "Duplicate definition of macros MYX_CMAKE_PROJECT_NAME_LOWER"
#else
#define MYX_CMAKE_PROJECT_NAME_LOWER "untitled2"
#endif

#if defined (MYX_CMAKE_PROJECT_NAME_UPPER)
#error "Duplicate definition of macros MYX_CMAKE_PROJECT_NAME_UPPER"
#else
#define MYX_CMAKE_PROJECT_NAME_UPPER "UNTITLED2"
#endif

#if defined (MYX_CMAKE_THEME_NAME)
#error "Duplicate definition of macros MYX_CMAKE_THEME_NAME"
#else
#define MYX_CMAKE_THEME_NAME "default"
#endif

#if defined (MYX_CMAKE_THEME_NAME_LOWER)
#error "Duplicate definition of macros MYX_CMAKE_THEME_NAME_LOWER"
#else
#define MYX_CMAKE_THEME_NAME_LOWER "default"
#endif

#if defined (MYX_CMAKE_THEME_NAME_UPPER)
#error "Duplicate definition of macros MYX_CMAKE_THEME_NAME_UPPER"
#else
#define MYX_CMAKE_THEME_NAME_UPPER "DEFAULT"
#endif

#if defined (MYX_CMAKE_AUTHOR_NAME)
#error "Duplicate definition of macros MYX_CMAKE_AUTHOR_NAME"
#else
#define MYX_CMAKE_AUTHOR_NAME "John Doe"
#endif

#if defined (MYX_CMAKE_AUTHOR_EMAIL)
#error "Duplicate definition of macros MYX_CMAKE_AUTHOR_EMAIL"
#else
#define MYX_CMAKE_AUTHOR_EMAIL "mail@johndoe.com"
#endif

#if defined (MYX_CMAKE_DESCRIPTION)
#error "Duplicate definition of macros MYX_CMAKE_DESCRIPTION"
#else
#define MYX_CMAKE_DESCRIPTION "Пример проекта: графическая программа Qt5"
#endif

#if defined (MYX_CMAKE_BUILD_TYPE)
#error "Duplicate definition of macros MYX_CMAKE_BUILD_TYPE"
#else
#define MYX_CMAKE_BUILD_TYPE "Debug"
#endif

#if defined (MYX_CMAKE_BUILD_DATE)
#error "Duplicate definition of macros MYX_CMAKE_BUILD_DATE"
#else
#define MYX_CMAKE_BUILD_DATE ""
#endif

#endif /* UNTITLED2_MYX_CMAKE_CONFIG_HPP_ */

