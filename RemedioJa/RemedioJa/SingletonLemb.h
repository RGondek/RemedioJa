//
//  SingletonLemb.h
//  RemedioJa
//
//  Created by Rubens Gondek on 3/27/15.
//  Copyright (c) 2015 Remedito. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Realm/Realm.h>

#import "Lembrete.h"

@interface SingletonLemb : NSObject

@property RLMRealm *meuRealm;
@property NSMutableArray *lembretes;

+(SingletonLemb*) instance;

-(NSArray *) obterTodosLembretes;
-(Lembrete *) obterObjIndex:(int)i;

-(void) salvarLembrete:(NSString *)nome andData:(NSDate *)data andIntervalo:(int)i;
-(void) alterarLembreteNome:(NSString *)n eData:(NSDate*)d Index:(int)i eIntervalo:(int)inter;
-(void) alterarEstado:(BOOL)status Index:(int)i;
-(void) removeLembreteIndex:(int)i;

@end
