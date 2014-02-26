//
//  FODFormRow.h
//  FormKitDemo
//
//  Created by Frank on 27/12/2013.
//  Copyright (c) 2013 Frank O'Dwyer. All rights reserved.
//

#import <Foundation/Foundation.h>

@class FODForm;
@class FODFormBuilder;

@interface FODFormRow : NSObject<NSCopying>

@property (nonatomic,copy) NSString *key;
@property (nonatomic,copy) NSString *title;
@property (nonatomic,copy) NSIndexPath *indexPath;

@property (nonatomic,readonly) BOOL isEditable;
@property (nonatomic,copy) id<NSCopying> initialValue;
@property (nonatomic,copy) id<NSCopying> workingValue;
@property (nonatomic,copy) id<NSCopying> placeHolder;
@property (nonatomic,assign) BOOL expanded;
@property (nonatomic,strong) NSMutableDictionary *viewState;
@property (nonatomic,assign) BOOL displayInline; // display the editor or subform inline if possible


// serializes to a property list format (array or dictionary)
- (id) toPlist;

// constructs from an in memory plist
+ (FODFormRow*) fromPlist:(id)plist
              withBuilder:(FODFormBuilder*)builder;

@end

