//
//  MMPhotoPickerConst.h
//  MMPhotoPicker
//
//  Created by LEA on 2017/11/10.
//  Copyright © 2017年 LEA. All rights reserved.
//


#import "UIView+Geometry.h"
#import "MMPhotoUtil.h"

//#### 宏定义

// 6p?
#define kDeviceIsIphone6p               CGSizeEqualToSize(CGSizeMake(1242,2208), [[[UIScreen mainScreen] currentMode] size])
// 图片边距
#define kBlankWidth                     4.0f
// 底部菜单高度
#define kBottomHeight                   44.0f
// RGB颜色
#define RGBColor(r,g,b,a)               [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
// 主颜色
#define kMainColor                      RGBColor(211.0, 58.0, 49.0, 1.0)
// 行高
#define kRowHeight                      60.0f
// 图片路径
#define MMPhotoPickerSrcName(file)      [@"MMPhotoPicker.bundle" stringByAppendingPathComponent:file]


// 资源类型 PHAssetMediaType
#define   MMPhotoMediaType              @"mediaType"
// 位置方向
#define   MMPhotoLocation               @"location"
// 原始图片
#define   MMPhotoOriginalImage          @"originalImage"
// 视频路径
#define   MMPhotoVideoURL               @"videoURL"
