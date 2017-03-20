//
//  UIScrollView+Pages.h
//  iOS-Categories (https://github.com/shaojiankui/iOS-Categories)
//
//  Created by Jakey on 14/12/30.
//  ScrollView 分页管理分类
//

#import <UIKit/UIKit.h>

@interface UIScrollView (Pages)
- (NSInteger)pages;
- (NSInteger)currentPage;
- (CGFloat)scrollPercent;

- (CGFloat)pagesY;
- (CGFloat)pagesX;
- (CGFloat)currentPageY;
- (CGFloat)currentPageX;
- (void) setPageY:(CGFloat)page;
- (void) setPageX:(CGFloat)page;
- (void) setPageY:(CGFloat)page animated:(BOOL)animated;
- (void) setPageX:(CGFloat)page animated:(BOOL)animated;
@end
