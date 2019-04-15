//
//  TDList.h
//  TestDataStructure
//
//  Created by TB on 2019/4/15.
//  Copyright © 2019 wo. All rights reserved.
//  单链表

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TDList : NSObject
/// 初始化一个固定大小的线形表
- (instancetype)initWithSize:(NSUInteger)size;

/// 查找链表中的某个元素
- (BOOL)checkListIsHaveItem:(id)item;

/// 插入一个元素到链表中
- (BOOL)insertItem:(id)item;

/// 删除链表中的一个元素
- (BOOL)deleteItem:(id)item;

/// 删除整个链表
- (BOOL)dropList;



@end

NS_ASSUME_NONNULL_END
