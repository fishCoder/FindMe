//
//  PostDetailViewController.h
//  FindMe
//
//  Created by mac on 14-7-2.
//  Copyright (c) 2014年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Post.h"
#import "ZBMessageInputView.h"
#import "ZBMessageManagerFaceView.h"

typedef NS_ENUM(NSInteger,ZBMessageViewState) {
    ZBMessageViewStateShowFace,
    ZBMessageViewStateShowShare,
    ZBMessageViewStateShowNone,
};

@interface PostDetailViewController : UIViewController<ZBMessageInputViewDelegate,ZBMessageManagerFaceViewDelegate>
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property(nonatomic,strong) Post *post;

@property (nonatomic,strong) ZBMessageInputView *messageToolView;

@property (nonatomic,strong) ZBMessageManagerFaceView *faceView;

@property (nonatomic,assign) CGFloat previousTextViewContentHeight;
@end
