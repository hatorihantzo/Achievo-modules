<?php

class relation_type extends atkNode 
{
  
  function relation_type()
  {
    $this->atkNode("relation_type",NF_MRA|NF_ADD_LINK);
    $this->add(new atkAttribute("id",AF_AUTOKEY));
    $this->add(new atkAttribute("type_name"));
        
    $this->setSecurityAlias("crm.account");
    $this->setOrder("type_name");
    $this->setTable("crm_relation_type");
  }
  
  function descriptor_def()
  {
    return "[type_name]";
  }
}



?>