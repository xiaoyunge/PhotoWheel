//
//  SendEmailController.h
//  PhotoWheel
//
//  Created by Kirby Turner on 12/11/12.
//  Copyright (c) 2012 White Peak Software Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MessageUI/MessageUI.h>
#import <MessageUI/MFMailComposeViewController.h>


@protocol SendEmailControllerDelegate;


@interface SendEmailController : NSObject <MFMailComposeViewControllerDelegate>

@property (nonatomic, weak) UIViewController<SendEmailControllerDelegate> *viewController;
@property (nonatomic, strong) NSSet *photos;


- (id)initWithViewController:(UIViewController<SendEmailControllerDelegate> *)viewController;
- (void)sendEmail;

+ (BOOL)canSendMail;

@end


@protocol SendEmailControllerDelegate <NSObject>
@required
- (void)sendEmailControllerDidFinish:(SendEmailController *)controller;
@end
